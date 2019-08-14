//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXSameSizedItemsGridLayoutSection.h"

@interface _IPXFilmStripLayoutSection : IPXSameSizedItemsGridLayoutSection
{
    unsigned long long _itemJustification;
}

+ (void)getDefaultConfigurationParameters:(struct *)arg1;
@property(nonatomic) unsigned long long itemJustification; // @synthesize itemJustification=_itemJustification;
- (BOOL)accessibilityIsOrientationAttributeSettable;
- (id)accessibilityOrientationAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityNotificationsPostedOnLayoutChange;
- (void)prepareInBounds:(struct CGRect)arg1 withPlacement:(unsigned long long)arg2;
- (void)_assignConfigurationParameters:(struct *)arg1 fromFilmStripLayout:(id)arg2 contentHeight:(double)arg3;
- (id)initWithLayout:(id)arg1 sectionIndex:(long long)arg2 itemCount:(long long)arg3;

@end

