//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTableColumn;

__attribute__((visibility("hidden")))
@interface NSOutlineColumnMockGroup : NSObject
{
    long long _row;
    NSTableColumn *_tableColumn;
}

+ (id)outlineColumnGroupForRow:(long long)arg1 tableColumn:(id)arg2;
+ (id)outlineColumnGroupForRow:(long long)arg1 column:(long long)arg2 tableView:(id)arg3;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsSizeAttributeSettable;
- (id)accessibilitySizeAttribute;
- (BOOL)accessibilityIsPositionAttributeSettable;
- (id)accessibilityPositionAttribute;
- (struct CGRect)_groupRect;
- (BOOL)accessibilityIsTopLevelUIElementAttributeSettable;
- (id)accessibilityTopLevelUIElementAttribute;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityWindowAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (BOOL)accessibilityIsParentAttributeSettable;
- (id)accessibilityParentAttribute;
- (BOOL)accessibilityIsRoleDescriptionAttributeSettable;
- (id)accessibilityRoleDescriptionAttribute;
- (BOOL)accessibilityIsRoleAttributeSettable;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (id)_cellProxyForRow:(long long)arg1 tableColumn:(id)arg2;
- (long long)accessibilityColumnIndex;
- (long long)column;
- (long long)row;
- (void)dealloc;
- (id)initWithRow:(long long)arg1 column:(long long)arg2 tableView:(id)arg3;
- (id)initWithRow:(long long)arg1 tableColumn:(id)arg2;

@end

