//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContactPickerSection, NSArray, NSString;

@protocol CNContactPickerInternalSetup <NSObject>
- (void)setSearchFieldVisible:(BOOL)arg1;
- (void)registerSectionsForDraggedTypes:(NSArray *)arg1;
- (void)showSectionWithIdentifier:(NSString *)arg1;
- (void)addSection:(CNContactPickerSection *)arg1;
- (void)traceUsageStatistics;
- (void)resetUsageStatistics;
- (void)setDisplayedKeys:(NSArray *)arg1;
@end
