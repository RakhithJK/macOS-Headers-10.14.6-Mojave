//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface MKTileOverlayTile : NSObject
{
    CDStruct_cbb88d5e _path;
    CDStruct_02837cd9 _frame;
    double _scale;
    NSData *_image;
}

@property(retain, nonatomic) NSData *image; // @synthesize image=_image;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) CDStruct_02837cd9 frame; // @synthesize frame=_frame;
@property(nonatomic) CDStruct_cbb88d5e path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)description;

@end

