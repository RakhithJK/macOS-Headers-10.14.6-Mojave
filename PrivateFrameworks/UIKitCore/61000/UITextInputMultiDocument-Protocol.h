//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@protocol NSCopying><NSSecureCoding;

@protocol UITextInputMultiDocument <NSObject>

@optional
- (void)_clearToken:(id <NSCopying><NSSecureCoding>)arg1;
- (void)_restoreFocusWithToken:(id <NSCopying><NSSecureCoding>)arg1 completion:(void (^)(BOOL))arg2;
- (BOOL)_restoreFocusWithToken:(id <NSCopying><NSSecureCoding>)arg1;
- (void)_preserveFocusWithToken:(id <NSCopying><NSSecureCoding>)arg1 destructively:(BOOL)arg2;
@end

