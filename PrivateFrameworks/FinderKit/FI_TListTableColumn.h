//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableColumn.h>

__attribute__((visibility("hidden")))
@interface FI_TListTableColumn : NSTableColumn
{
    _Bool _isSortColumn;
    int _mainProperty;
}

@property(nonatomic) int mainProperty; // @synthesize mainProperty=_mainProperty;
@property(nonatomic) _Bool isSortColumn; // @synthesize isSortColumn=_isSortColumn;
- (void)setIdentifier:(id)arg1;
- (void)awakeFromNib;
- (id)initWithIdentifier:(id)arg1;
- (id)copyColumn;

@end

