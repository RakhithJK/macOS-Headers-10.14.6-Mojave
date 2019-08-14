//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/ColorInvertingTableCellView.h>

@class NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface AddressBookRecentlyUsedAutoFillCellView : ColorInvertingTableCellView
{
    NSString *_contactNameAndContactLabel;
    NSString *_addressBookDataWillBeFilled;
    NSTextField *_contactNameAndContactLabelTextField;
    NSTextField *_addressBookDataWillBeFilledTextField;
}

+ (struct CGSize)sizeWithContactNameAndContactLabel:(id)arg1 addressBookDataWillBeFilled:(id)arg2;
@property __weak NSTextField *addressBookDataWillBeFilledTextField; // @synthesize addressBookDataWillBeFilledTextField=_addressBookDataWillBeFilledTextField;
@property __weak NSTextField *contactNameAndContactLabelTextField; // @synthesize contactNameAndContactLabelTextField=_contactNameAndContactLabelTextField;
@property(copy, nonatomic) NSString *addressBookDataWillBeFilled; // @synthesize addressBookDataWillBeFilled=_addressBookDataWillBeFilled;
@property(copy, nonatomic) NSString *contactNameAndContactLabel; // @synthesize contactNameAndContactLabel=_contactNameAndContactLabel;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

