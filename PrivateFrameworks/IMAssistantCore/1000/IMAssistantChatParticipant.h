//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, IMHandle;

@interface IMAssistantChatParticipant : NSObject
{
    IMHandle *_imHandle;
    CNContact *_contact;
}

@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) IMHandle *imHandle; // @synthesize imHandle=_imHandle;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIMHandle:(id)arg1 contact:(id)arg2;

@end

