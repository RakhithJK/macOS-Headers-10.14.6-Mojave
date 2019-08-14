//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRAudioBuffer, MRAudioDataBlock;

@interface MRSendVoiceInputMessage : MRProtocolMessage
{
    MRAudioDataBlock *_dataBlock;
}

- (void).cxx_destruct;
- (void)_initializeDataIfNecessary;
@property(readonly, nonatomic) float gain;
@property(readonly, nonatomic) CDStruct_ace97b7a time;
@property(readonly, nonatomic) MRAudioBuffer *buffer;
- (unsigned long long)priority;
- (unsigned long long)type;
- (id)initWithBuffer:(id)arg1 time:(CDStruct_ace97b7a)arg2 gain:(float)arg3;

@end

