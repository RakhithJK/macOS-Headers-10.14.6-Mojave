//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;
@protocol CNUINavigationListItemContent;

@interface CNUINavigationListItem : NSObject
{
    id <CNUINavigationListItemContent> _content;
    CNUINavigationListItem *_parent;
    NSString *_identifier;
    UIImage *_image;
    NSString *_title;
    NSString *_subtitle;
    CNUINavigationListItem *_defaultItem;
    NSArray *_items;
}

+ (id)itemForActionItem:(id)arg1 isGrouped:(BOOL)arg2;
+ (id)navigationListItemsForUserActionListModel:(id)arg1;
+ (id)localizedLabelForActionItem:(id)arg1 usingPropertyLabel:(BOOL)arg2;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak CNUINavigationListItem *defaultItem; // @synthesize defaultItem=_defaultItem;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak CNUINavigationListItem *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) id <CNUINavigationListItemContent> content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 image:(id)arg2;
- (id)initWithTitle:(id)arg1;
- (id)init;

@end

