//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLServerFeedbackMessage, NSDictionary, NSString, NSUUID;

@interface CPLSerializedFeedbackMessage : NSObject
{
    NSUUID *_uuid;
    CPLServerFeedbackMessage *_serverMessage;
    NSString *_feedbackType;
}

+ (id)messagesForPlistRepresentation:(id)arg1;
+ (id)plistRepresentationForMessages:(id)arg1;
@property(readonly, nonatomic) CPLServerFeedbackMessage *serverMessage; // @synthesize serverMessage=_serverMessage;
@property(readonly, nonatomic) NSString *feedbackType; // @synthesize feedbackType=_feedbackType;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithMessage:(id)arg1;

@end

