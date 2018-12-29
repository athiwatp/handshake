// Objective-C API for talking to github.com/nomasters/handshake/x/mobile-exp Go package.
//   gobind -lang=objc github.com/nomasters/handshake/x/mobile-exp
//
// File is generated by gobind. Do not edit.

#ifndef __HandshakeCore_H__
#define __HandshakeCore_H__

@import Foundation;
#include "Universe.objc.h"


@class HandshakeCoreCounter;

/**
 * testing out state in the app with a simple counter
 */
@interface HandshakeCoreCounter : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (long)get;
- (void)inc;
@end

/**
 * testing network communication with a simple interface
and error handling
 */
FOUNDATION_EXPORT NSData* HandshakeCoreGetHash(NSString* hash, NSError** error);

/**
 * testing interacting with a more complex library
but with a simple func interface
 */
FOUNDATION_EXPORT NSData* HandshakeCoreGetKey(NSData* pw, NSData* salt);

/**
 * checking out simple string response
 */
FOUNDATION_EXPORT NSString* HandshakeCoreHelloWorld(void);

FOUNDATION_EXPORT HandshakeCoreCounter* HandshakeCoreNewCounter(void);

#endif