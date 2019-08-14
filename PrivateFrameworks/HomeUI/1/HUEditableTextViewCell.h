//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUIconCell.h>

@class NSString, UITextView;
@protocol UITextViewDelegate;

@interface HUEditableTextViewCell : HUIconCell
{
    BOOL _editEnabled;
    BOOL _showingPlaceholder;
    NSString *_text;
    NSString *_placeholderText;
    UITextView *_textView;
}

@property(nonatomic) BOOL showingPlaceholder; // @synthesize showingPlaceholder=_showingPlaceholder;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) BOOL editEnabled; // @synthesize editEnabled=_editEnabled;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
- (void).cxx_destruct;
- (id)trimmedStringForText:(id)arg1;
- (void)updateTextColor;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak id <UITextViewDelegate> textViewDelegate;
- (void)setDisabled:(BOOL)arg1;
- (void)handleUITextViewTextDidEndEditingNotification:(id)arg1;
- (void)handleUITextViewTextDidBeginEditingNotification:(id)arg1;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
