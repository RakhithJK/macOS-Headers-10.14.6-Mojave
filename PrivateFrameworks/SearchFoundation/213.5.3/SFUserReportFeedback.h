//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

#import <SearchFoundation/NSCopying-Protocol.h>

@class SFCardSection, SFPunchout, SFSearchResult;

@interface SFUserReportFeedback : SFFeedback <NSCopying>
{
    SFSearchResult *_result;
    SFCardSection *_cardSection;
    SFPunchout *_userSelection;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) SFPunchout *userSelection; // @synthesize userSelection=_userSelection;
@property(retain, nonatomic) SFCardSection *cardSection; // @synthesize cardSection=_cardSection;
@property(retain, nonatomic) SFSearchResult *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSelection:(id)arg1 result:(id)arg2 cardSection:(id)arg3;

@end

