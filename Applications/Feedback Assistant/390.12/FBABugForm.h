//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAManagedFeedbackObject.h"

@class FBABugFormStub, FBAContentItem, NSArray, NSDate, NSNumber, NSOrderedSet, NSSet, NSString, NSURL;

@interface FBABugForm : FBAManagedFeedbackObject
{
    BOOL generatingTemp;
    NSNumber *boxedFormRole;
    NSString *cachedAnnouncementHTML;
    NSURL *announcementTempFile;
}

+ (long long)bugFormRoleFromString:(id)arg1;
+ (long long)bugFormTypeFromString:(id)arg1;
+ (id)entityName;
@property BOOL generatingTemp; // @synthesize generatingTemp;
@property(retain) NSURL *announcementTempFile; // @synthesize announcementTempFile;
@property(retain, nonatomic) NSString *cachedAnnouncementHTML; // @synthesize cachedAnnouncementHTML;
@property(retain, nonatomic) NSNumber *boxedFormRole; // @synthesize boxedFormRole;
- (void).cxx_destruct;
- (id)signatureDescription;
- (BOOL)matchesFormStubSignature:(id)arg1;
- (BOOL)requiresPreview;
@property(readonly) NSSet *draftResponsesContentItems;
@property(readonly) NSSet *completedResponsesContentItems;
@property(retain) NSArray *questionGroups;
@property long long role;
@property long long feedbackType;
- (id)questionWithRole:(id)arg1;
- (id)questionForQuestionID:(id)arg1;
- (id)questionGroupForQuestionID:(id)arg1;
- (id)description;
- (void)setPropertiesFromJSONObject:(id)arg1;
- (id)issueAreaDisplayNameForKeyword:(id)arg1;
- (id)localizedFeedbackTypeShortName;
- (id)localizedFeedbackTypeName;
- (id)feedbackTypeRank;
- (void)updateResolvableQuestions;
@property(readonly) NSString *fullAnnouncementHTML;
@property(readonly) NSURL *cachedAnnouncementFile;
@property(readonly) NSString *surveyAnnouncementHTML;
@property(readonly) NSString *surveyActionText;
- (BOOL)isSurveyAvailable;
@property(readonly) BOOL canTake;

// Remaining properties
@property BOOL active; // @dynamic active;
@property(retain) NSSet *filePredicates; // @dynamic filePredicates;
@property(retain) NSSet *formResponses; // @dynamic formResponses;
@property(retain) NSString *name; // @dynamic name;
@property(retain) NSString *platform; // @dynamic platform;
@property(retain, nonatomic) NSNumber *primitiveFeedbackType; // @dynamic primitiveFeedbackType;
@property(retain, nonatomic) NSOrderedSet *primitiveQuestionGroups; // @dynamic primitiveQuestionGroups;
@property(retain) NSString *repeatPer; // @dynamic repeatPer;
@property BOOL shouldRepeat; // @dynamic shouldRepeat;
@property(retain) NSString *signature; // @dynamic signature;
@property(retain) FBABugFormStub *stub; // @dynamic stub;
@property(retain) FBAContentItem *surveyContentItem; // @dynamic surveyContentItem;
@property(retain) NSString *text; // @dynamic text;
@property(retain) NSDate *updatedAt; // @dynamic updatedAt;

@end

