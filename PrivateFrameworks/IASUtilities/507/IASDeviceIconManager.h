//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IASDeviceIconManager : NSObject
{
    NSMutableDictionary *_iconCache;
}

+ (id)sharedManager;
@property(retain) NSMutableDictionary *iconCache; // @synthesize iconCache=_iconCache;
- (void).cxx_destruct;
- (id)deviceTypeFromIdentifier:(id)arg1;
- (id)deviceIconForIdentifier:(id)arg1 deviceColor:(id)arg2 enclosureColor:(id)arg3;
- (id)deviceIconForIdentifier:(id)arg1 color:(id)arg2;
- (id)deviceIconForIdentifier:(id)arg1;
- (id)init;

@end

