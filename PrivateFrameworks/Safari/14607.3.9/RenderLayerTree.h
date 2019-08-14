//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSOutlineView;
@protocol NSOutlineViewDataSource;

__attribute__((visibility("hidden")))
@interface RenderLayerTree : NSWindowController
{
    NSOutlineView *outlineView;
    id <NSOutlineViewDataSource> dataSource;
    id _lifetimeExtender;
}

@property(retain, nonatomic) id lifetimeExtender; // @synthesize lifetimeExtender=_lifetimeExtender;
- (void).cxx_destruct;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (void)_createTreeFromWKView:(id)arg1;
- (id)initWithWKView:(id)arg1;

@end
