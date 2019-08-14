//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class InlineEditController;

@protocol InlineEditProtocol
- (void)inlineEdit:(InlineEditController *)arg1 wantsCellAfterCellWithKey:(long long)arg2 fieldIndex:(long long)arg3 moveType:(int)arg4;
- (void)inlineEdit:(InlineEditController *)arg1 wantsCellBeforeCellWithKey:(long long)arg2 fieldIndex:(long long)arg3 moveType:(int)arg4;
- (BOOL)validateFieldValue:(id)arg1 forInlineEdit:(InlineEditController *)arg2 cellKey:(long long)arg3;
- (BOOL)setFieldValue:(id)arg1 forInlineEdit:(InlineEditController *)arg2 cellKey:(long long)arg3 fieldIndex:(long long)arg4;
- (id)fieldValueForInlineEdit:(InlineEditController *)arg1 cellKey:(long long)arg2 fieldIndex:(long long)arg3;
- (long long)fieldCountForInlineEdit:(InlineEditController *)arg1;
@end

