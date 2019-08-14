//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewTextAttachmentCell.h>

#import <AppKit/NSServicesRolloverViewDelegate-Protocol.h>
#import <AppKit/NSSharingServiceDelegate-Protocol.h>
#import <AppKit/NSSharingServicePickerDelegate-Protocol.h>

@class NSLayoutManager, NSMenu, NSSharingServicePicker, NSString, NSTextView;

__attribute__((visibility("hidden")))
@interface NSRolloveringImageTextAttachmentCell : NSViewTextAttachmentCell <NSServicesRolloverViewDelegate, NSSharingServiceDelegate, NSSharingServicePickerDelegate>
{
    NSLayoutManager *_layoutManager;
    NSTextView *_textView;
    unsigned long long _charIndex;
    NSSharingServicePicker *_picker;
}

- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 containerFrameOnScreenForShareItem:(id)arg2;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (BOOL)sharingServicePicker:(id)arg1 shouldShowForView:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 mask:(unsigned long long)arg3 proposedSharingServices:(id)arg4;
- (id)pickerForRolloverCalloutView:(id)arg1;
@property(retain) NSMenu *menu; // @dynamic menu;
- (id)picker;
- (id)itemsForSharingServices;
- (void)triggerRelayoutOfTextView;
- (void)adjustView:(id)arg1 frame:(struct CGRect)arg2 forView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (void)addView:(id)arg1 frame:(struct CGRect)arg2 toView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (void)dealloc;
- (oneway void)releaseView:(id)arg1;
- (id)viewWithFrame:(struct CGRect)arg1 forView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
@property(readonly) __weak NSTextView *textView; // @dynamic textView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

