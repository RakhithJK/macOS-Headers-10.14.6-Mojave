//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <JavaScriptCore/JSContext.h>

@interface JSContext (ValueCreation)
- (id)valueWithJSValueRef:(struct OpaqueJSValue *)arg1;
- (id)valueWithUndefined;
- (id)valueWithNull;
- (id)valueWithNewErrorFromMessage:(id)arg1;
- (id)valueWithNewRegularExpressionFromPattern:(id)arg1 flags:(id)arg2;
- (id)valueWithNewArray;
- (id)valueWithNewObject;
- (id)valueWithUInt32:(unsigned int)arg1;
- (id)valueWithInt32:(int)arg1;
- (id)valueWithDouble:(double)arg1;
- (id)valueWithBool:(BOOL)arg1;
- (id)valueWithObject:(id)arg1;
@end

