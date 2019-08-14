//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NCTodayHeaderViewController, NCTodayItemViewController, NSDate, NSImage, NSString, NSURL;

@interface NCTodayItem : NSObject
{
    _Bool _hasHeader;
    _Bool _hasCardLook;
    _Bool _headerHidesText;
    BOOL _enabled;
    _Bool _sortable;
    _Bool _hidden;
    _Bool _pinnedToTop;
    _Bool _pinnedToBottom;
    _Bool _alwaysEnabled;
    _Bool _includedInSortPreferences;
    _Bool _remoteViewIsLive;
    NCTodayItemViewController *_controller;
    NCTodayHeaderViewController *_headerController;
    NSString *_title;
    NSString *_identifier;
    NSString *_configurationName;
    NSString *_configurationDescription;
    NSImage *_configurationImage;
    NSString *_configurationImagePath;
    NSString *_configurationImageBundlePath;
    NSURL *_containgURL;
    NSURL *_url;
    unsigned long long _cardLook;
    double _contentHeight;
    Class _viewControllerClass;
    NSDate *_remoteViewRefreshDate;
}

@property(retain, nonatomic) NSDate *remoteViewRefreshDate; // @synthesize remoteViewRefreshDate=_remoteViewRefreshDate;
@property(nonatomic) _Bool remoteViewIsLive; // @synthesize remoteViewIsLive=_remoteViewIsLive;
@property(nonatomic) Class viewControllerClass; // @synthesize viewControllerClass=_viewControllerClass;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) _Bool includedInSortPreferences; // @synthesize includedInSortPreferences=_includedInSortPreferences;
@property(nonatomic) _Bool alwaysEnabled; // @synthesize alwaysEnabled=_alwaysEnabled;
@property(nonatomic) _Bool pinnedToBottom; // @synthesize pinnedToBottom=_pinnedToBottom;
@property(nonatomic) _Bool pinnedToTop; // @synthesize pinnedToTop=_pinnedToTop;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) _Bool sortable; // @synthesize sortable=_sortable;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool headerHidesText; // @synthesize headerHidesText=_headerHidesText;
@property(nonatomic) _Bool hasCardLook; // @synthesize hasCardLook=_hasCardLook;
@property(nonatomic) _Bool hasHeader; // @synthesize hasHeader=_hasHeader;
@property(nonatomic) unsigned long long cardLook; // @synthesize cardLook=_cardLook;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSURL *containgURL; // @synthesize containgURL=_containgURL;
@property(copy, nonatomic) NSString *configurationImageBundlePath; // @synthesize configurationImageBundlePath=_configurationImageBundlePath;
@property(copy, nonatomic) NSString *configurationImagePath; // @synthesize configurationImagePath=_configurationImagePath;
@property(retain, nonatomic) NSImage *configurationImage; // @synthesize configurationImage=_configurationImage;
@property(copy, nonatomic) NSString *configurationDescription; // @synthesize configurationDescription=_configurationDescription;
@property(copy, nonatomic) NSString *configurationName; // @synthesize configurationName=_configurationName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NCTodayHeaderViewController *headerController; // @synthesize headerController=_headerController;
@property(retain, nonatomic) NCTodayItemViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL configurationShowAsNew;
@property(readonly, nonatomic) _Bool contentIsVisible;
@property(readonly, copy, nonatomic) NSString *messageTracerIdentifier;
@property(readonly, nonatomic) BOOL isSnippet;
@property(readonly, nonatomic) _Bool isRemoteItem;
- (id)description;
- (void)dealloc;

@end

