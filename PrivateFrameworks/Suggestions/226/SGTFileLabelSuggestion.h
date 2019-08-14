//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Suggestions/SGTSuggestion.h>

@class NSColor, NSImage, NSUUID;

@interface SGTFileLabelSuggestion : SGTSuggestion
{
    NSColor *labelColor;
    NSImage *swatchImage;
    long long label;
    BOOL isFinderLabel;
}

+ (id)_colorForLabel:(long long)arg1;
+ (id)labelsCategory;
@property(readonly) NSColor *labelColor; // @synthesize labelColor;
- (void).cxx_destruct;
- (id)_propertyListRepresentation;
- (BOOL)_shouldNotBeIncludedInRecents;
- (id)_identifier;
- (id)tokenTitle;
- (id)displayNameForScope:(long long)arg1;
- (long long)scope;
- (id)scopes;
- (id)tokenImage;
- (id)imageForMenu;
- (id)queryStringFragment;
@property(readonly) NSUUID *labelUUID;
@property(readonly) long long label;
- (id)initWithMDLabel:(struct __MDLabel *)arg1;
- (id)initWithLabelIdentifier:(id)arg1 displayName:(id)arg2 labelColorIndex:(long long)arg3 labelUUID:(id)arg4 isFinderLabel:(BOOL)arg5;

@end

