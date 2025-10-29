CREATE TABLE library_inventory (
    catalog_no INTEGER PRIMARY KEY,
    title TEXT,
    author TEXT,
    copyright_dt TEXT,
    description TEXT,
    location TEXT,
    isbn TEXT,
    condition TEXT
);
INSERT INTO library_inventory 
(catalog_no, title, author, copyright_dt, description, location, isbn, condition)
VALUES
(1, 'Speak', NULL, '2006-08-12', 'Paperback', 'Building', '340817623', 'Binding loose'),
(3, 'Hoot', NULL, '2006-08-17', 'Paperback', 'Building', '375821813', NULL),
(4, 'Artemis Fowl', NULL, '2006-08-17', 'Hardcover', 'Bookmobile', '141312122', 'Missing dust jacket'),
(5, 'Wolfie', NULL, '2008-09-29', 'Hardcover', 'Bookmobile', '299389231', NULL),
(6, 'Student Name', NULL, '2008-09-29', 'Paperback', 'Bookmobile', '555555555', NULL);

SELECT * FROM library_inventory;



<<<<<<< HEAD
=======


---
---

>>>>>>> 7e1e1e68699a4a8082a561e1ff6f92d76365f6b9
CREATE TABLE SpecialOffer (
    Special_Offer_ID INT NOT NULL PRIMARY KEY,
    ETL_Source       VARCHAR(50)  NOT NULL,
    Offer_Name       VARCHAR(100) NOT NULL,
    DiscountPct      DECIMAL(4,2) NOT NULL DEFAULT 0.00,
    Type             VARCHAR(50)  NOT NULL,
    Category         VARCHAR(50)  NOT NULL
);



INSERT INTO SpecialOffer (Special_Offer_ID, ETL_Source, Offer_Name, DiscountPct, Type, Category) VALUES
(1, 'ADVENTURE', 'No Discount',                0.00, 'No Discount',          'No Discount'),
(2, 'ADVENTURE', 'Volume Discount 11 to 14',   0.02, 'Volume Discount',      'Reseller'),
(3, 'ADVENTURE', 'Volume Discount 15 to 24',   0.05, 'Volume Discount',      'Reseller'),
(4, 'ADVENTURE', 'Volume Discount 25 to 40',   0.10, 'Volume Discount',      'Reseller'),
(5, 'ADVENTURE', 'Volume Discount 41 to 60',   0.15, 'Volume Discount',      'Reseller'),
(6, 'ADVENTURE', 'Volume Discount over 60',    0.20, 'Volume Discount',      'Reseller'),
(7, 'ADVENTURE', 'Mountain-100 Clearance Sale',0.35, 'Discontinued Product','Reseller'),
(8, 'ADVENTURE', 'Sport Helmet Discount-2002', 0.10, 'Seasonal Discount',   'Reseller'),
(9, 'ADVENTURE', 'Road-650 Overstock',         0.30, 'Excess Inventory',    'Reseller'),
(10,'ADVENTURE', 'Mountain Tire Sale',          0.50, 'Excess Inventory',    'Customer');


SELECT * FROM SpecialOffer ORDER BY Special_Offer_ID;