//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSLayoutConstraint, NSMatrix, NSString, NSTextField, NSView, NSWindow, NSXPCConnection, SFAuthorization;

@interface NSPrefInstallAssistant : NSObject
{
    NSWindow *mAssistantWindow;
    NSMatrix *mInstallLocationMatrix;
    NSTextField *mCaptionText;
    NSTextField *mNoteText;
    NSView *mOptionsView;
    NSLayoutConstraint *mOptionsViewHeightLayoutConstraint;
    NSBundle *mBundle;
    NSString *mInstallPath;
    NSWindow *mHostWindow;
    NSXPCConnection *mHelperConnection;
    SFAuthorization *mAuthorization;
}

+ (id)locString:(id)arg1 withParameter:(id)arg2 andParameter:(id)arg3;
+ (id)extentsionsDict;
- (void).cxx_destruct;
- (id)installPath;
- (void)cancel:(id)arg1;
- (void)install:(id)arg1;
- (void)installLocationDidChange:(id)arg1;
- (void)uninstall:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)install:(id)arg1 shared:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)beginForWindow:(id)arg1 path:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)awakeFromNib;
- (void)_doInstall:(id)arg1 shared:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_close:(long long)arg1;
- (id)_installPathForExtension:(id)arg1 shared:(BOOL)arg2;
- (id)_invokeInstallAssistantWithBlock:(CDUnknownBlockType)arg1;

@end
