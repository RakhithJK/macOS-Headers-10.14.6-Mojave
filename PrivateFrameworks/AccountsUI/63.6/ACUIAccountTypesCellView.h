//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class ACUIAccountTypesViewController;

@interface ACUIAccountTypesCellView : NSTableCellView
{
    BOOL _isLastRow;
    BOOL _isHovered;
    ACUIAccountTypesViewController *_accountTypesVC;
}

@property __weak ACUIAccountTypesViewController *accountTypesVC; // @synthesize accountTypesVC=_accountTypesVC;
@property BOOL isHovered; // @synthesize isHovered=_isHovered;
@property BOOL isLastRow; // @synthesize isLastRow=_isLastRow;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)click:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;

@end
