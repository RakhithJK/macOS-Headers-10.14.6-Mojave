//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIDecoratedText;

@interface SASTStockComparisonItem : AceObject <SASTTemplateItem>
{
}

+ (id)stockComparisonItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)stockComparisonItem;
@property(retain, nonatomic) SAUIDecoratedText *value;
@property(retain, nonatomic) SAUIDecoratedText *title;
@property(retain, nonatomic) SAUIDecoratedText *subtitle;
@property(copy, nonatomic) NSString *stockValueFacet;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

