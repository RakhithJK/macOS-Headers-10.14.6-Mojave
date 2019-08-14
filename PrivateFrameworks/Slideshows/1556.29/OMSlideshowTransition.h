//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OMSlideshowTransition : NSObject
{
    BOOL _supportsSetSpeed;
    NSString *_transitionID;
    NSString *_localizedName;
    unsigned long long _supportedDirections;
}

+ (id)transitionWithID:(id)arg1 localizedName:(id)arg2 supportsSetSpeed:(BOOL)arg3 supportedDirections:(unsigned long long)arg4;
@property(readonly) unsigned long long supportedDirections; // @synthesize supportedDirections=_supportedDirections;
@property(readonly) BOOL supportsSetSpeed; // @synthesize supportsSetSpeed=_supportsSetSpeed;
@property(readonly) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly) NSString *transitionID; // @synthesize transitionID=_transitionID;
- (id)description;

@end
