//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCAssetVideo, NSString;

@interface MCSlideAsset : NSObject
{
    MCAssetVideo *_asset;
    NSString *_kenBurnsType;
    struct CGPoint center;
    double scale;
    double rotation;
}

@property(copy) NSString *kenBurnsType; // @synthesize kenBurnsType=_kenBurnsType;
@property(retain) MCAssetVideo *asset; // @synthesize asset=_asset;
- (id)description;
- (void)dealloc;
- (id)init;

@end

