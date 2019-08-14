//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SXColumnLayout, SXComponentTextStyle;

@interface SXTextResizer : NSObject
{
    SXColumnLayout *_columnLayout;
    SXComponentTextStyle *_defaultTextStyle;
}

@property(retain, nonatomic) SXComponentTextStyle *defaultTextStyle; // @synthesize defaultTextStyle=_defaultTextStyle;
@property(retain, nonatomic) SXColumnLayout *columnLayout; // @synthesize columnLayout=_columnLayout;
- (void).cxx_destruct;
- (double)normalizedFontSizeForSize:(double)arg1;
- (unsigned long long)resizeDropCapNumberOfLines:(long long)arg1;
- (long long)resizeTextSize:(long long)arg1 fontResizingThreshold:(double)arg2 fontSizeConstant:(double)arg3 contentSizeCategory:(id)arg4 fontTextStyle:(id)arg5;
- (id)initWithColumnLayout:(id)arg1 andDefaultTextStyle:(id)arg2;

@end

