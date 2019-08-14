# Release notes

### 2019.2.1 ###
#### Features/Improvements
- Support for iOS13
- Added option to force VPIO Audio Unit to be used regardless of Audio Echo Cancellation setting, which allows the volume to be kept consistent when s stream subscriber starts to publish
#### Fixes
- Room participants will no longer leave zombie sessions around when reauthenticating
- Fixed `audio-only` for cases where wildcard tokens are present for channel viewers
- Fixed color artifacts when rendering H264 video in certain resolutions


### 2019.2.1 ###
#### Features/Improvements
- Lag render statistic via `Renderer.getStats`/`PhenixRenderer.stats`
- Reduced SDK initialization times
- Improved layer switching strategy for MBR streams
- Improved reconnection logic for clients with network outages
- Automatic channel viewer stream restart when app returns to foreground
#### Fixes
- Fixed memory leak on stop publishing
- Fixed rebuffering telemetry metric
- Fixed rare crash when backgrounding app
- Fixed crash when attempting to subscribe while SDK is being shut down
- Fixed spelling for `PhenixRoomChatService.sendMessageToRoom` API (previously `SendMessageToRoom`)


### 2019.2.0 ###
#### Features/Improvements
- `getObservableIsOnlineStatus` API on `PhenixPCastExpress`: Boolean observable value indicating whether or not we are currently connected to the Phenix platform
- `stats` property on `PhenixRenderer`: Will provide real-time statistics similar to https://phenixrts.com/docs/web/low-level/#object-rendererstats eventually. Current versions always returns 0 for `lag`.
#### Fixes
- Fix crash during ICE server registration
- Safe creation of an empty renderer from an already stopped ExpressSubscriber
- Publisher side frame-ready API: Drops frames when overloaded instead of falling behind
- Fix prefer-h264 publish capability for old iPads (e.g. mini 2)


### 2019.0.0 ###
#### Fixes
- Publisher bitrate limitation reason will remain “None” and no longer be set to “PublisherLimited” while recovering from bitrate override
- Normal app termination/exit will no longer trigger sporadic exceptions
- Audio volume will no longer decrease low for viewers that had become publishers temporarily
- Connected BlueTooth devices will now be sent audio when just rendering a local preview


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
