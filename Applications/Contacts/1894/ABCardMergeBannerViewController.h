//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSColor, NSString, NSTextField;

@interface ABCardMergeBannerViewController : NSViewController
{
    NSTextField *_textField;
    NSString *_string;
    NSColor *_color;
}

+ (id)stringForKey:(id)arg1;
+ (id)updateBannerViewController;
+ (id)keepBothNewBannerViewController;
+ (id)keepBothOldBannerViewController;
+ (id)keepNewCardBannerViewController;
+ (id)keepOldBannerViewController;
@property NSTextField *textField; // @synthesize textField=_textField;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithString:(id)arg1 color:(id)arg2;

@end

