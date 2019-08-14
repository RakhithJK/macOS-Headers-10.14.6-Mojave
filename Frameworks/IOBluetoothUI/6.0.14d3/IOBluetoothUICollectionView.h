//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IOBluetoothUI/CBCentralManagerDelegate-Protocol.h>
#import <IOBluetoothUI/CBPeripheralDelegate-Protocol.h>
#import <IOBluetoothUI/IOBluetoothDevicePairDelegate-Protocol.h>
#import <IOBluetoothUI/IOBluetoothProximityPairDelegate-Protocol.h>
#import <IOBluetoothUI/NSMenuDelegate-Protocol.h>
#import <IOBluetoothUI/NSTableViewDelegate-Protocol.h>
#import <IOBluetoothUI/NSWindowDelegate-Protocol.h>

@class BluetoothHIDDeviceController, CBCentralManager, CBPeripheral, IOBluetoothDevice, IOBluetoothDeviceInquiry, IOBluetoothDevicePairViewController, IOBluetoothProximityPair, IOBluetoothUISortedArrayController, NSAlert, NSArray, NSButton, NSImage, NSImageView, NSMutableArray, NSMutableDictionary, NSPanel, NSProgressIndicator, NSString, NSTableView, NSTextField, NSTimer, NSTrackingArea, NSView, NSWindowController;

@interface IOBluetoothUICollectionView : NSViewController <NSMenuDelegate, NSTableViewDelegate, IOBluetoothDevicePairDelegate, CBCentralManagerDelegate, CBPeripheralDelegate, NSWindowDelegate, IOBluetoothProximityPairDelegate>
{
    BOOL mAutoAdjustButtonSize;
    BOOL mUserPasscode;
    NSTableView *mDeviceTable;
    IOBluetoothUISortedArrayController *mDevicesArray;
    NSAlert *mAlert;
    NSPanel *mPairingViewPanel;
    NSView *mPairingView;
    NSTextField *mPairingText;
    NSTextField *mPairingHeader;
    NSView *mPairViewPlaceholder;
    IOBluetoothDevicePairViewController *mPairViewController;
    NSView *mOptionsViewPlaceholder;
    IOBluetoothDevice *mPairingDevice;
    IOBluetoothDevice *mRenameDevice;
    CBCentralManager *mCentralManager;
    NSArray *mPeripherals;
    CBPeripheral *mCurrentPeripheral;
    NSPanel *mPairingOptionsPanel;
    NSView *mPairingOptionsView;
    NSTextField *mPairingPasscode;
    NSTextField *mPairingOptionsText;
    NSTextField *mPairingOptionsHeader;
    NSView *mRenameViewPlaceholder;
    NSTextField *mRenameField;
    NSPanel *mUnpairWarningPanel;
    NSView *mUnpairWarningView;
    NSTextField *mUnpairWarningText;
    NSTextField *mUnpairWarningHeader;
    NSPanel *mPrinterPanel;
    NSView *mPrinterView;
    NSTextField *mPrinterViewText;
    NSTextField *mPrinterViewHeader;
    NSProgressIndicator *mProgressIndicator;
    NSButton *mRemoveSelected;
    NSString *mPairButton;
    BluetoothHIDDeviceController *_hidDeviceController;
    NSMutableDictionary *mPairingDeviceDict;
    NSMutableDictionary *mUnpairingDeviceDict;
    struct IOBluetoothDeviceSearchAttributes *mSearchAttributes;
    unsigned int mDeviceClassFilter;
    unsigned int mDeviceSubclassFilter;
    IOBluetoothDeviceInquiry *mInquiry;
    BOOL mNoInquiryCache;
    int mInquiryCacheTimeout;
    BOOL mBluetoothPowerOn;
    int mPairedDeviceCount;
    NSArray *mTopLevelObjects;
    NSTrackingArea *mDeviceTableTrackingArea;
    NSMutableDictionary *mDevicesGroupDict;
    NSImage *mAlertImage;
    NSImage *mPrefPane;
    NSImageView *mPrefIcon;
    BOOL mPairing;
    BOOL mSearching;
    int mInternalStopped;
    BOOL mStopped;
    BOOL mBackGround;
    BOOL mSimplePairingReceived;
    BOOL mDoubleClickNotify;
    BOOL mPerformingRename;
    BOOL mUpdateBattery;
    BOOL mSafeToEnumerate;
    NSMutableArray *mDeviceArrayTmp;
    BOOL windowLoaded;
    NSWindowController *audioOptionsController;
    IOBluetoothProximityPair *proxPairing;
    BOOL _mShowPairButton;
    NSTimer *_mLETimer;
    IOBluetoothDevice *_mAppleDevice;
}

+ (void)updateDict:(id)arg1 removeKey:(id)arg2;
+ (void)updateDict:(id)arg1 withValue:(id)arg2 forKey:(id)arg3;
+ (BOOL)updateDictWasNeeded:(id)arg1 withValue:(id)arg2 forKey:(id)arg3;
+ (id)selectorViewForDevicesOfAttributes:(struct IOBluetoothDeviceSearchAttributes *)arg1;
+ (id)listViewForDevicesOfAttributes:(struct IOBluetoothDeviceSearchAttributes *)arg1;
+ (id)selectorViewForDevicesOfClass:(unsigned int)arg1 subclass:(unsigned int)arg2;
+ (id)listViewForDevicesOfClass:(unsigned int)arg1 subclass:(unsigned int)arg2;
@property IOBluetoothDevice *mAppleDevice; // @synthesize mAppleDevice=_mAppleDevice;
@property BOOL mShowPairButton; // @synthesize mShowPairButton=_mShowPairButton;
@property(retain) NSTimer *mLETimer; // @synthesize mLETimer=_mLETimer;
@property(retain) CBPeripheral *currentPeripheral; // @synthesize currentPeripheral=mCurrentPeripheral;
@property(retain) NSArray *peripherals; // @synthesize peripherals=mPeripherals;
@property(retain) CBCentralManager *centralManager; // @synthesize centralManager=mCentralManager;
@property BOOL backGround; // @synthesize backGround=mBackGround;
@property NSString *pairButton; // @synthesize pairButton=mPairButton;
@property NSImage *prefPaneIcon; // @synthesize prefPaneIcon=mPrefPane;
@property BOOL bluetoothPowerOn; // @synthesize bluetoothPowerOn=mBluetoothPowerOn;
@property BOOL stopped; // @synthesize stopped=mStopped;
@property int internalStopped; // @synthesize internalStopped=mInternalStopped;
@property BOOL searching; // @synthesize searching=mSearching;
@property BOOL pairing; // @synthesize pairing=mPairing;
@property BOOL userPasscode; // @synthesize userPasscode=mUserPasscode;
@property(retain) NSMutableDictionary *unpairingDeviceDict; // @synthesize unpairingDeviceDict=mUnpairingDeviceDict;
@property(retain) NSMutableDictionary *pairingDeviceDict; // @synthesize pairingDeviceDict=mPairingDeviceDict;
@property(retain) NSMutableDictionary *devicesGroup; // @synthesize devicesGroup=mDevicesGroupDict;
@property struct IOBluetoothDeviceSearchAttributes *deviceSearchAttributes; // @synthesize deviceSearchAttributes=mSearchAttributes;
@property unsigned int deviceSubclassFilter; // @synthesize deviceSubclassFilter=mDeviceSubclassFilter;
@property unsigned int deviceClassFilter; // @synthesize deviceClassFilter=mDeviceClassFilter;
@property int inquiryCacheTimeout; // @synthesize inquiryCacheTimeout=mInquiryCacheTimeout;
@property BOOL noInquiryCache; // @synthesize noInquiryCache=mNoInquiryCache;
@property(retain) IOBluetoothDeviceInquiry *inquiry; // @synthesize inquiry=mInquiry;
- (void)setAppleAudioDeviceName:(id)arg1;
- (id)setAppleDeviceName:(id)arg1;
- (void)powerStateChangeStarted;
- (BOOL)isPairingInProgress;
- (BOOL)hasResolvedName:(id)arg1;
- (BOOL)checkSSPSupport;
- (BOOL)hasPairingOptions:(id)arg1;
- (int)sortingOrder:(id)arg1;
- (BOOL)deviceHasServiceRecordWithUUID:(id)arg1 device:(id)arg2;
- (void)sendOPPAppleEventWithDevice:(id)arg1;
- (void)sendOPPAppleEvent;
- (void)sendFTPAppleEventWithDevice:(id)arg1;
- (void)sendFTPAppleEvent;
- (void)handleSendFileToDevice:(id)arg1;
- (void)handleBrowseDevice:(id)arg1;
- (void)handlePANDevice:(id)arg1;
- (void)handlePANDeviceDisconnect:(id)arg1;
- (BOOL)checkActivePAN:(id)arg1;
- (void)changeDeviceName:(id)arg1 newName:(id)arg2;
- (BOOL)tempDeviceHasServiceRecordWithUUID:(id)arg1 device:(id)arg2;
- (BOOL)isTrackpad:(id)arg1;
- (void)batteryDidUpdate:(id)arg1;
- (void)batteryNotification:(id)arg1;
- (void)deviceSimplePairingComplete:(id)arg1 status:(unsigned char)arg2;
- (void)devicePairingFinished:(id)arg1 error:(int)arg2;
- (void)devicePairingUserPasskeyNotification:(id)arg1 passkey:(unsigned int)arg2;
- (void)devicePairingUserConfirmationRequest:(id)arg1 numericValue:(unsigned int)arg2;
- (void)devicePairingPINCodeRequest:(id)arg1;
- (void)devicePairingConnecting:(id)arg1;
- (void)devicePairingStarted:(id)arg1;
- (void)proximityPair:(id)arg1 withData:(id)arg2;
- (void)updateDict:(id)arg1 withDevice:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didFinishPairingWithResult:(id)arg2;
- (void)peripheral:(id)arg1 didReceivePairingRequestOfType:(id)arg2 withPasskey:(id)arg3;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)continueInquiryUpdate;
- (void)deviceInquiryComplete:(id)arg1 error:(int)arg2 aborted:(BOOL)arg3;
- (void)deviceInquiryDeviceNameUpdated:(id)arg1 device:(id)arg2 devicesRemaining:(int)arg3;
- (void)deviceInquiryUpdatingDeviceNamesStarted:(id)arg1 devicesRemaining:(int)arg2;
- (void)deviceInquiryDeviceFound:(id)arg1 device:(id)arg2;
- (void)deviceInquiryStarted:(id)arg1;
- (void)updateInquiryWithDelay:(id)arg1;
- (void)inquiryStarted:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (long long)getSelectedRowCount;
- (id)getSelectedRow;
- (void)_tableDoubleClick:(id)arg1;
- (void)setDoubleClickNotify;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)_beginRenameForRow:(long long)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)_menuCancel:(id)arg1;
- (void)_menuUnpair:(id)arg1;
- (void)_menuRename:(id)arg1;
- (void)_menuPair:(id)arg1;
- (void)_menuDisconnect:(id)arg1;
- (void)connectionComplete:(id)arg1 status:(int)arg2;
- (void)_menuConnect:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (id)_addMenuItemToMenu:(id)arg1 withTitle:(id)arg2 representedObject:(id)arg3 action:(SEL)arg4;
- (void)_restartInquiry:(id)arg1;
- (void)_resumeInquiry;
- (void)_pauseInquiry;
- (void)stopSearch;
- (void)pauseSearch;
- (void)startSearch;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_hitTestWithEvent:(id)arg1;
- (void)_updateTrackingArea;
- (void)renameAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_animateRenamingUI:(id)arg1;
- (void)_animateDisplayingTableUI;
- (void)printerAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_animateDisplayingPrinterUI;
- (void)_animateDisplayingUnpairingUI:(id)arg1;
- (void)pairAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_animateDisplayingPairingUI:(id)arg1;
- (void)unpairAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)_setupUnpairingUI:(id)arg1;
- (void)pairOptionsAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_setupPairingOptionsUI:(id)arg1 dictForPairing:(id)arg2;
- (void)cancelGoBack:(id)arg1;
- (void)continueUnpairing:(id)arg1;
- (void)pairUsingOptions:(id)arg1;
- (void)cancelAppleOptions:(id)arg1;
- (void)appleOptions:(id)arg1;
- (void)pairingOptions:(id)arg1;
- (void)returnToTable:(id)arg1;
- (void)cancelUnpairing:(id)arg1;
- (void)cancelPairing:(id)arg1;
- (void)cleanAfterIncomingPairing;
- (void)pairUnpairSelectedDevice:(id)arg1;
- (void)_unpairDeviceInDictionary:(id)arg1 skipWarning:(BOOL)arg2;
- (void)_unpairDeviceInDictionary:(id)arg1;
- (void)_pairDeviceInDictionary:(id)arg1;
- (void)lePairingComplete:(id)arg1;
- (void)leTimeout:(id)arg1;
- (void)_batteryDidUpdate:(id)arg1;
- (void)_updateBatteryNotification:(id)arg1;
- (void)_updatePairedDeviceCount;
- (void)_updatePairedDevices:(id)arg1;
- (void)deviceWasUpdated:(id)arg1;
- (void)chargingSourceChanged:(id)arg1;
- (void)bluetoothDeviceNameChanged:(id)arg1;
- (void)handlePairedDevicesChanged:(id)arg1;
- (void)_updatePairedDevicesDelay:(id)arg1;
- (void)bluetoothUserDisconnectNotification:(id)arg1 deviceConnected:(id)arg2;
- (void)bluetoothUserConnectNotification:(id)arg1 deviceConnected:(id)arg2;
- (void)registerForDisconnectNotification;
- (void)sendUpdateFromValueTransform:(id)arg1;
- (void)_updateUSBStatus:(id)arg1;
- (void)_powerOff:(id)arg1;
- (void)_powerOn:(id)arg1;
- (void)dealloc;
- (void)prefPaneBackground;
- (void)loadView;
- (void)_loadD2DPairingNib;
- (id)_statusStringLE:(id)arg1;
- (id)_statusString:(id)arg1;
- (id)locString:(id)arg1;
@property(retain) NSButton *pairUnpairButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

