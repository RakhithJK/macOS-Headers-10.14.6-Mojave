//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSLock, NSMutableArray, NSString;

@interface ISS_DMDataFromFile : NSData
{
    NSData *_embeddedData;
    NSMutableArray *_previousData;
    NSString *_localPath;
    NSLock *_dataLock;
}

+ (id)dataWithLocalFile:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_setEmbeddedData:(id)arg1;
- (unsigned int)length;
- (const void *)bytes;
- (void)reinitialize;
- (id)initWithLocalFile:(id)arg1;

@end

