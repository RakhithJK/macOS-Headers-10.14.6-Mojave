//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SKDisk, SUBaseProgressSheet;

@interface SUDeleteAPFSVolumeSheetController : NSObject
{
    _Bool _isPhysicalDisk;
    SUBaseProgressSheet *_deleteAPFSVolumeProgressSheet;
    SKDisk *_targetDisk;
}

@property _Bool isPhysicalDisk; // @synthesize isPhysicalDisk=_isPhysicalDisk;
@property(retain) SKDisk *targetDisk; // @synthesize targetDisk=_targetDisk;
@property(retain) SUBaseProgressSheet *deleteAPFSVolumeProgressSheet; // @synthesize deleteAPFSVolumeProgressSheet=_deleteAPFSVolumeProgressSheet;
- (void).cxx_destruct;
- (void)showWindowWithParentWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithTargetDisk:(id)arg1;

@end

