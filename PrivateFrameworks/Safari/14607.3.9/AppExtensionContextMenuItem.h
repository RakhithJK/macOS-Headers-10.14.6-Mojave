//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AppExtensionContextMenu, NSString;

__attribute__((visibility("hidden")))
@interface AppExtensionContextMenuItem : NSObject
{
    AppExtensionContextMenu *_contextMenu;
    NSString *_text;
    NSString *_command;
}

@property(readonly, copy, nonatomic) NSString *command; // @synthesize command=_command;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) __weak AppExtensionContextMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
- (void).cxx_destruct;
- (id)userInfoForContentViewController:(id)arg1;
- (id)initWithAppExtensionContextMenu:(id)arg1 text:(id)arg2 command:(id)arg3;

@end

