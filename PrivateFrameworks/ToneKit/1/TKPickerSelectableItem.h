//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ToneKit/TKPickerRowItem.h>

@class NSString;

@interface TKPickerSelectableItem : TKPickerRowItem
{
    BOOL _shouldTintText;
    BOOL _showsCheckmark;
    BOOL _showsDisclosureIndicator;
    BOOL _shouldPreventSelection;
    NSString *_text;
    NSString *_detailText;
}

@property(nonatomic, setter=_setShouldPreventSelection:) BOOL shouldPreventSelection; // @synthesize shouldPreventSelection=_shouldPreventSelection;
@property(nonatomic, setter=_setShowsDisclosureIndicator:) BOOL showsDisclosureIndicator; // @synthesize showsDisclosureIndicator=_showsDisclosureIndicator;
@property(nonatomic, setter=_setShowsCheckmark:) BOOL showsCheckmark; // @synthesize showsCheckmark=_showsCheckmark;
@property(copy, nonatomic, setter=_setDetailText:) NSString *detailText; // @synthesize detailText=_detailText;
@property(nonatomic, setter=_setShouldTintText:) BOOL shouldTintText; // @synthesize shouldTintText=_shouldTintText;
@property(copy, nonatomic, setter=_setText:) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;

@end

