//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNUIUserActionItem, CNUIUserActionListModel, NSString;
@protocol CNLSApplicationWorkspace;

@interface CNContactActionsDisambiguationMenuGenerator : NSObject
{
    id _target;
    CNUIUserActionListModel *_model;
    CNUIUserActionItem *_defaultAction;
    NSString *_actionType;
    id <CNLSApplicationWorkspace> _applicationWorkspace;
    CDUnknownBlockType _menuItemForActionItem;
}

+ (id)menuItemLabelWithActionLabel:(id)arg1 secondaryLabel:(id)arg2;
+ (id)TTYPostfixFormatStringForActionItem:(id)arg1;
+ (id)TTYPostfixedLabelFromLabel:(id)arg1 forActionItem:(id)arg2;
+ (id)trademarkLabelByLowercaseTrademarkLabel;
+ (id)capitalizedDisplayLabelFromLabel:(id)arg1;
+ (id)unlocalizedLabelFromActionItem:(id)arg1;
+ (id)labelForActionItem:(id)arg1 usingApplicationWorkspace:(id)arg2 capitalize:(BOOL)arg3;
+ (id)actionTitleAttributes;
+ (id)secondaryLabelAttributes;
+ (id)labelAttributes;
+ (id)paragraphStyleWithTabOffset:(double)arg1;
+ (double)widthOfSpace;
+ (double)maxWidthOfMenuItemList:(id)arg1;
+ (id)adjustTabOfAttributedString:(id)arg1 withTabOffset:(double)arg2;
@property(readonly, copy, nonatomic) CDUnknownBlockType menuItemForActionItem; // @synthesize menuItemForActionItem=_menuItemForActionItem;
@property(readonly, nonatomic) id <CNLSApplicationWorkspace> applicationWorkspace; // @synthesize applicationWorkspace=_applicationWorkspace;
@property(readonly, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) CNUIUserActionItem *defaultAction; // @synthesize defaultAction=_defaultAction;
@property(readonly, nonatomic) CNUIUserActionListModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)adjustTabStopForMaximumWidth:(id)arg1;
- (void)markTheDefaultItem:(id)arg1;
- (id)menuItemForActionItem:(id)arg1;
- (id)menuItemsForFoundOnDeviceActions;
- (id)menuItemsForDirectoryServiceActions;
- (id)menuItemsForActions;
- (id)titleMenuItem;
- (id)makeMenu;
- (id)initWithTarget:(id)arg1 model:(id)arg2 actionType:(id)arg3 applicationWorkspace:(id)arg4;

@end

