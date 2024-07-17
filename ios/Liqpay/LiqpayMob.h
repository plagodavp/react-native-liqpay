#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, ErrorCode) {
    ErrorCodeIO,
    ErrorCodeInetMissing,
    ErrorCodeNonUIThread,
    ErrorCodeCheckoutCanceled,
    ErrorCodeUIThread,
};

@protocol LiqPayCallBack <NSObject>

- (UINavigationController *)navigationController;
- (void)onResponseSuccess:(NSString *)response;
- (void)onResponseError:(NSError *)errorCode;
- (UIColor *)getStatusBarColor;

@end

@interface LiqpayMob : NSObject

@property (nonatomic, weak) id<LiqPayCallBack> delegate;

- (id)initLiqPayWithDelegate:(id<LiqPayCallBack>)delegate;

- (void)api:(NSString *)path
     params:(NSDictionary *)params
 privateKey:(NSString *)privateKey
   delegate:(id<LiqPayCallBack>)delegate;

- (void)api:(NSString *)path
paramsBase64:(NSString *)paramsBase64
  signature:(NSString *)signature
   delegate:(id<LiqPayCallBack>)delegate;

- (void)checkout:(NSDictionary *)params
      privateKey:(NSString *)privateKey
        delegate:(id<LiqPayCallBack>)delegate;

- (void)checkoutWithParamsBase64:(NSString *)paramsBase64
                       signature:(NSString *)signature
                        delegate:(id<LiqPayCallBack>)delegate;

@end
