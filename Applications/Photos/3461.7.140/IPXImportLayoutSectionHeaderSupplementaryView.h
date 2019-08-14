//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mondrian/MOPhotosSupplementaryHeader.h>

#import "NSAccessibilityGroup-Protocol.h"

@class NSButton, NSString;

@interface IPXImportLayoutSectionHeaderSupplementaryView : MOPhotosSupplementaryHeader <NSAccessibilityGroup>
{
    NSButton *_accessoryButton;
}

@property(readonly, nonatomic) NSButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
- (void).cxx_destruct;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (void)expandCollapseControlClicked:(id)arg1;
@property(copy, nonatomic) NSString *accessoryTitle;
- (BOOL)resizeTextFields;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

