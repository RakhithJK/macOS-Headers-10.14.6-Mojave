//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPayloadUnsupported-Protocol.h>

@class NSArray, NSString;

@interface _INPBPayloadUnsupported : PBCodable <_INPBPayloadUnsupported, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int requestPaymentIntentCurrencyAmountUnsupportedReason:1;
        unsigned int sendPaymentIntentCurrencyAmountUnsupportedReason:1;
        unsigned int createTimerIntentLabelUnsupportedReason:1;
        unsigned int sendPaymentIntentPayeeUnsupportedReason:1;
        unsigned int requestPaymentIntentPayerUnsupportedReason:1;
        unsigned int reason:1;
        unsigned int sendMessageIntentRecipientUnsupportedReason:1;
        unsigned int setTimerAttributeIntentTargetTimerUnsupportedReason:1;
        unsigned int runWorkflowIntentWorkflowUnsupportedReason:1;
    } _has;
    int _requestPaymentIntentCurrencyAmountUnsupportedReason;
    int _sendPaymentIntentCurrencyAmountUnsupportedReason;
    int _createTimerIntentLabelUnsupportedReason;
    int _sendPaymentIntentPayeeUnsupportedReason;
    int _requestPaymentIntentPayerUnsupportedReason;
    int _reason;
    int _sendMessageIntentRecipientUnsupportedReason;
    int _setTimerAttributeIntentTargetTimerUnsupportedReason;
    int _runWorkflowIntentWorkflowUnsupportedReason;
    NSArray *_conflictingParameters;
}

+ (Class)conflictingParametersType;
@property(nonatomic) int runWorkflowIntentWorkflowUnsupportedReason; // @synthesize runWorkflowIntentWorkflowUnsupportedReason=_runWorkflowIntentWorkflowUnsupportedReason;
@property(nonatomic) int setTimerAttributeIntentTargetTimerUnsupportedReason; // @synthesize setTimerAttributeIntentTargetTimerUnsupportedReason=_setTimerAttributeIntentTargetTimerUnsupportedReason;
@property(nonatomic) int sendMessageIntentRecipientUnsupportedReason; // @synthesize sendMessageIntentRecipientUnsupportedReason=_sendMessageIntentRecipientUnsupportedReason;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(nonatomic) int requestPaymentIntentPayerUnsupportedReason; // @synthesize requestPaymentIntentPayerUnsupportedReason=_requestPaymentIntentPayerUnsupportedReason;
@property(nonatomic) int sendPaymentIntentPayeeUnsupportedReason; // @synthesize sendPaymentIntentPayeeUnsupportedReason=_sendPaymentIntentPayeeUnsupportedReason;
@property(nonatomic) int createTimerIntentLabelUnsupportedReason; // @synthesize createTimerIntentLabelUnsupportedReason=_createTimerIntentLabelUnsupportedReason;
@property(nonatomic) int sendPaymentIntentCurrencyAmountUnsupportedReason; // @synthesize sendPaymentIntentCurrencyAmountUnsupportedReason=_sendPaymentIntentCurrencyAmountUnsupportedReason;
@property(nonatomic) int requestPaymentIntentCurrencyAmountUnsupportedReason; // @synthesize requestPaymentIntentCurrencyAmountUnsupportedReason=_requestPaymentIntentCurrencyAmountUnsupportedReason;
@property(copy, nonatomic) NSArray *conflictingParameters; // @synthesize conflictingParameters=_conflictingParameters;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsRunWorkflowIntentWorkflowUnsupportedReason:(id)arg1;
- (id)runWorkflowIntentWorkflowUnsupportedReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasRunWorkflowIntentWorkflowUnsupportedReason;
- (int)StringAsSetTimerAttributeIntentTargetTimerUnsupportedReason:(id)arg1;
- (id)setTimerAttributeIntentTargetTimerUnsupportedReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasSetTimerAttributeIntentTargetTimerUnsupportedReason;
- (int)StringAsSendMessageIntentRecipientUnsupportedReason:(id)arg1;
- (id)sendMessageIntentRecipientUnsupportedReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasSendMessageIntentRecipientUnsupportedReason;
- (int)StringAsReason:(id)arg1;
- (id)reasonAsString:(int)arg1;
@property(nonatomic) BOOL hasReason;
- (int)StringAsRequestPaymentIntentPayerUnsupportedReason:(id)arg1;
- (id)requestPaymentIntentPayerUnsupportedReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasRequestPaymentIntentPayerUnsupportedReason;
- (int)StringAsSendPaymentIntentPayeeUnsupportedReason:(id)arg1;
- (id)sendPaymentIntentPayeeUnsupportedReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasSendPaymentIntentPayeeUnsupportedReason;
- (int)StringAsCreateTimerIntentLabelUnsupportedReason:(id)arg1;
- (id)createTimerIntentLabelUnsupportedReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasCreateTimerIntentLabelUnsupportedReason;
- (int)StringAsSendPaymentIntentCurrencyAmountUnsupportedReason:(id)arg1;
- (id)sendPaymentIntentCurrencyAmountUnsupportedReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasSendPaymentIntentCurrencyAmountUnsupportedReason;
- (int)StringAsRequestPaymentIntentCurrencyAmountUnsupportedReason:(id)arg1;
- (id)requestPaymentIntentCurrencyAmountUnsupportedReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasRequestPaymentIntentCurrencyAmountUnsupportedReason;
- (id)conflictingParametersAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long conflictingParametersCount;
- (void)addConflictingParameters:(id)arg1;
- (void)clearConflictingParameters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
