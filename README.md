# RZBCocoaPods
A barebones Cocoa Touch Framework to demonstrate an issue with RZBluetooth and CocoaPods 1.5.3

To reproduce the problem (described in [RZBluetooth #41](https://github.com/Raizlabs/RZBluetooth/issues/41)):

1. Clone this repo
2. Run the unit tests
3. Observe "Test Failed" notification and error message in console:

```
2018-08-01 13:35:30.146200-0400 xctest[20150:447144] The bundle “RZBCocoaPodsTests” couldn’t be loaded. Try reinstalling the bundle.
2018-08-01 13:35:30.146320-0400 xctest[20150:447144] (dlopen(/Users/joshbrown/Library/Developer/Xcode/DerivedData/RZBCocoaPods-glejbamszyagfiacnmhmnpwhqvzj/Build/Products/Debug-iphonesimulator/RZBCocoaPodsTests.xctest/RZBCocoaPodsTests, 265): Symbol not found: _OBJC_CLASS_$_RZBSimulatedTestCase
  Referenced from: /Users/joshbrown/Library/Developer/Xcode/DerivedData/RZBCocoaPods-glejbamszyagfiacnmhmnpwhqvzj/Build/Products/Debug-iphonesimulator/RZBCocoaPodsTests.xctest/RZBCocoaPodsTests
  Expected in: /Users/joshbrown/Library/Developer/Xcode/DerivedData/RZBCocoaPods-glejbamszyagfiacnmhmnpwhqvzj/Build/Products/Debug-iphonesimulator/RZBCocoaPodsTests.xctest/Frameworks/RZBluetooth.framework/RZBluetooth
 in /Users/joshbrown/Library/Developer/Xcode/DerivedData/RZBCocoaPods-glejbamszyagfiacnmhmnpwhqvzj/Build/Products/Debug-iphonesimulator/RZBCocoaPodsTests.xctest/RZBCocoaPodsTests)
Program ended with exit code: 83
```
