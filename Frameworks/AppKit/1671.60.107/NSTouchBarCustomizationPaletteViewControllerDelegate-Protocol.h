//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSTouchBarCustomizationPaletteViewController, NSTouchBarItem;

@protocol NSTouchBarCustomizationPaletteViewControllerDelegate <NSObject>
- (void)controllerAccessibilityResetTouchBar:(NSTouchBarCustomizationPaletteViewController *)arg1;
- (void)controller:(NSTouchBarCustomizationPaletteViewController *)arg1 accessibilityAddItem:(NSTouchBarItem *)arg2;
- (void)controllerDidEndDragging:(NSTouchBarCustomizationPaletteViewController *)arg1;
- (void)controllerWillBeginDragging:(NSTouchBarCustomizationPaletteViewController *)arg1;
@end

