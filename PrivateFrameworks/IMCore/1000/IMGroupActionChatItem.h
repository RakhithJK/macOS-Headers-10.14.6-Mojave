//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMGroupActionChatItem : IMTranscriptChatItem
{
    IMHandle *_sender;
}

@property(readonly, nonatomic) IMHandle *sender; // @synthesize sender=_sender;
- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;
@property(readonly, nonatomic) long long actionType;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

