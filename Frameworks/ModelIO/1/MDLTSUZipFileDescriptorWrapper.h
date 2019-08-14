//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MDLTSUReadChannel, OS_dispatch_group;

@interface MDLTSUZipFileDescriptorWrapper : NSObject
{
    NSObject<OS_dispatch_group> *_accessGroup;
    int _fileDescriptor;
    id <MDLTSUReadChannel> _readChannel;
}

@property(readonly, nonatomic) id <MDLTSUReadChannel> readChannel; // @synthesize readChannel=_readChannel;
@property(readonly, nonatomic) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
- (void).cxx_destruct;
- (void)waitForAccessToEnd;
- (void)endAccess;
- (void)beginAccess;
- (void)dealloc;
- (id)initWithFileDescriptor:(int)arg1 queue:(id)arg2;
- (id)init;

@end

