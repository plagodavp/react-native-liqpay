Pod::Spec.new do |s|
  s.name         = "react-native-liqpay"
  s.version      = "0.1.0"
  s.summary      = "LiqPay SDK for React Native"
  s.homepage     = "https://github.com/vasilich6107/react-native-liqpay"
  s.license      = "MIT"
  s.author       = { "Vasili" => "vasilich6107@gmail.com" }
  s.platform     = :ios, "12.0"
  s.source       = { :git => "https://github.com/vasilich6107/react-native-liqpay.git", :tag => "#{s.version}" }
  s.source_files  = "ios/**/*.{h,m}"
  s.dependency "React-Core"
end
