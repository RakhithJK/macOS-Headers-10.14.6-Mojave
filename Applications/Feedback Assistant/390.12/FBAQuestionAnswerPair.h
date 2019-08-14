//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"
#import "_TtP18Feedback_Assistant21FBARichTextExportable_-Protocol.h"

@class NSAttributedString, NSString;

@interface FBAQuestionAnswerPair : NSObject <_TtP18Feedback_Assistant21FBARichTextExportable_, NSSecureCoding>
{
    BOOL _isRequired;
    NSString *_questionText;
    NSString *_answerText;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isRequired; // @synthesize isRequired=_isRequired;
@property(retain, nonatomic) NSString *answerText; // @synthesize answerText=_answerText;
@property(retain, nonatomic) NSString *questionText; // @synthesize questionText=_questionText;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)setPropertiesFromJSONObject:(id)arg1;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithQuestionText:(id)arg1 andAnswerText:(id)arg2;
@property(nonatomic, readonly) NSAttributedString *richTextExportRepresentation;

@end

