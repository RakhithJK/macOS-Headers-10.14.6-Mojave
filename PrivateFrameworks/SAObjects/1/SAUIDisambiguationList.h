//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSArray, NSString, SAUIDomainObjectPicker;

@interface SAUIDisambiguationList : SAAceView
{
}

+ (id)disambiguationListWithDictionary:(id)arg1 context:(id)arg2;
+ (id)disambiguationList;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *speakableSuffix;
@property(copy, nonatomic) NSString *speakableSelectionResponse;
@property(copy, nonatomic) NSString *speakableFinalDelimiter;
@property(copy, nonatomic) NSString *speakableDelimiter;
@property(copy, nonatomic) NSString *selectionResponse;
@property(copy, nonatomic) NSArray *items;
@property(copy, nonatomic) NSString *groupTitle;
@property(copy, nonatomic) NSArray *fallbackCommands;
@property(retain, nonatomic) SAUIDomainObjectPicker *domainObjectPicker;
@property(copy, nonatomic) NSString *disambiguationKey;
@property(nonatomic) BOOL autoDisambiguationDisabled;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

