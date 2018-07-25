Pod::Spec.new do |s|
  s.name                = "PhenixSdk"
  s.version             = "2018.2.2"
  s.summary             = "Phenix Real-Time Video SDK."
  s.homepage            = "https://phenixrts.com"
  s.license             = ''
  s.author              = { "Phenix" => "info@phenixrts.com" }
  s.source              = { :git => "ssh://git@github.com/PhenixRTS/iOSSDK.git", :tag => "v#{s.version}" }
  s.vendored_frameworks = "lib/iPhoneOS/PhenixSdk.framework"
  s.source_files        = "lib/iPhoneOS/PhenixSdk.framework/Headers/**/*.h"
  s.public_header_files = "lib/iPhoneOS/PhenixSdk.framework/Headers/**/*.h"
  s.platform            = :ios, '9.0'
  s.requires_arc        = true
  s.frameworks          = 'UIKit'
  s.module_name         = 'PhenixSdk'
end
