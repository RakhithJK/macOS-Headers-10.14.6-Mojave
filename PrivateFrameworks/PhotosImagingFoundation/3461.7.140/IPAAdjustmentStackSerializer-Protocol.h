//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosImagingFoundation/NSObject-Protocol.h>

@class IPAAdjustmentStack, NSData, NSDictionary;

@protocol IPAAdjustmentStackSerializer <NSObject>
- (NSDictionary *)archiveFromData:(NSData *)arg1 error:(id *)arg2;
- (NSData *)dataFromArchive:(NSDictionary *)arg1 error:(id *)arg2;
- (IPAAdjustmentStack *)adjustmentStackFromData:(NSData *)arg1 error:(id *)arg2;
- (NSData *)dataFromAdjustmentStack:(IPAAdjustmentStack *)arg1 error:(id *)arg2;
@end

