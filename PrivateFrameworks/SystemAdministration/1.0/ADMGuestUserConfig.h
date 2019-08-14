//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage;

@interface ADMGuestUserConfig : NSObject
{
    NSImage *mDefaultGuestPicture;
}

+ (void)syncGuestState;
+ (long long)guestMode;
+ (BOOL)isGuestEnabled;
+ (void)setGuestEnabled:(BOOL)arg1;
+ (id)sharedConfig;
+ (BOOL)_isFDEEnabled;
- (id)guestUserPicture;
- (id)_imageFromCGImage1x:(struct CGImage *)arg1 andCGImage2x:(struct CGImage *)arg2;
- (BOOL)isGuestAccountEnabled;
- (void)setGuestAccountEnabled:(BOOL)arg1;
- (id)createGuestAccount;
- (id)findGuestAccount;
- (void)dealloc;
- (id)init;
- (id)_generateGuestPassword;

@end

