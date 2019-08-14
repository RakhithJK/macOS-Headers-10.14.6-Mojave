//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSURL;

@interface FCSyncFileCoordinatedDictionary : NSObject
{
    NSURL *_fileURL;
    NSSet *_allowedClasses;
}

@property(readonly, copy, nonatomic) NSSet *allowedClasses; // @synthesize allowedClasses=_allowedClasses;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (BOOL)writeWithAccessor:(CDUnknownBlockType)arg1;
- (id)read;
- (id)initWithFileURL:(id)arg1 allowedClasses:(id)arg2;
- (id)init;

@end
