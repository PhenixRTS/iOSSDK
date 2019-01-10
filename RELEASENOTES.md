# Release notes

### 2018.4.3 ###
#### Features/Improvements
- URIs passed to SDK can now accept leading and trailing whitespaces without causing failures
- Improved chat message observable behavior to ensure that initial callback will always contain most recent chat history
- Allow switching of camera resolution while publishing
- Support for BGRA pixel format when using FrameReady API

#### Fixes
- Fixed detached functionality when publishing remote streams via express API
- Fixed sporadic DTLS connection issues


### 2018.4.2 ###
#### Features/Improvements
- Improved connection time during SDK initialization.  Results in shorter time-to-first-frame.
- WiFi connected clients are no longer automatically forced through TURN/TCP
- New limitBandwidth API method to limit the maximum bandwidth a client should use for streams

#### Fixes
- Fixed reconnection issues which could occur when devices switch networks or are moved to background and back
- Fixed occasional 5 second hang when SDK is shut down
- Fix for dropping video or audio when consuming streams where one is arriving later than the other
- Fixed automatic resubscription logic when streams are ended with a recoverable reason


### 2018.4.1 ###
#### Features
- Framework is organized as a module for easier integration
- Universal version of SDK containing both device and simulator frameworks
- First version of telemetry, providing better visibility into device performance
- Room and channel publish APIs now provide RoomService instance in callback
- Improved connections times when initializing Phenix SDK
- Allow passing of custom HTTP headers for authentication and stream token requests

#### Fixes
- Fixes for various crashes that could occur when shutting down or stopping the Phenix SDK
- Fixed sporadic loss of audio on viewer side
- Fixed color representation when rendering stream content
- Fixed crash when running SDK in simulator
- Fixed H264 encoding issue on iPhones 5C and 5S
