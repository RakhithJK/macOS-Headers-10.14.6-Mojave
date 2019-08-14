//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WBSSingleCreditCardData;

__attribute__((visibility("hidden")))
@interface SingleCreditCardDataCompletionListItemInformation : NSObject
{
    NSString *_displayText;
    NSString *_headerTextForCompletionList;
    NSString *_headerTextForFunctionBar;
    WBSSingleCreditCardData *_singleCreditCardData;
}

@property(readonly, nonatomic) WBSSingleCreditCardData *singleCreditCardData; // @synthesize singleCreditCardData=_singleCreditCardData;
@property(readonly, copy, nonatomic) NSString *headerTextForFunctionBar; // @synthesize headerTextForFunctionBar=_headerTextForFunctionBar;
@property(readonly, copy, nonatomic) NSString *headerTextForCompletionList; // @synthesize headerTextForCompletionList=_headerTextForCompletionList;
@property(readonly, copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
- (void).cxx_destruct;
- (id)initWithSingleCreditCardData:(id)arg1 displayText:(id)arg2 headerTextForCompletionList:(id)arg3 headerTextForFunctionBar:(id)arg4;
- (id)init;

@end

