//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/UnifiedFieldCompletionTableCellView.h>

@class NSTextField;

__attribute__((visibility("hidden")))
@interface UnifiedFieldCompletionTableTextCellView : UnifiedFieldCompletionTableCellView
{
    NSTextField *_checkmarkTextField;
}

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_setUpCheckmarkTextField;
- (void)prepareForReuse;
@property(nonatomic, getter=isChecked) BOOL checked;
- (id)initWithFrame:(struct CGRect)arg1;

@end
